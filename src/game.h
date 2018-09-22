#ifndef gameScene_h
#define gameScene_h

#include <Arduboy2.h>
#include "renderer.h"
#include "overworld.h"
#include "dungeons.h"
#include "tileRoom.h"
#include "inGameMenu.h"
#include "hud.h"
#include "entities/player.h"
#include "entity.h"

const uint8_t MAX_ENTITIES = 8;

const uint8_t OVERWORLD_WIDTH_IN_ROOMS = 7;
const uint8_t OVERWORLD_HEIGHT_IN_ROOMS = 7;
const uint8_t DUNGEONS_WIDTH_IN_ROOMS = 8;

class Game {
    typedef void (Game::*UpdatePtr)(uint8_t);
    typedef void (Game::*RenderPtr)(uint8_t);

    private:
        Arduboy2Base& arduboy;
        Renderer& renderer;

        uint8_t titleRow;

        Player player;


        const uint8_t* const* const* entityDefs;
        const uint8_t* doorDefs;

        uint8_t nextRoomX;
        uint8_t nextRoomY;
        RoomType roomType;
        uint8_t bossDelayCount;
        InGameMenu menu;

        uint8_t roomTransitionCount;
        bool firstRoomTransitionFrame;
        uint8_t teleportTransitionCount;
        uint8_t mapWidthInRooms;
        uint8_t mapHeightInRooms;

        UpdatePtr prevUpdate;
        UpdatePtr currentUpdate;
        UpdatePtr nextUpdate;

        RenderPtr prevRender;
        RenderPtr currentRender;
        RenderPtr nextRender;

        bool swapRooms;

        void detectEntityCollisions(void);
        void goToNextRoom(int16_t playerX, int16_t playerY);
        void loadEntitiesInRoom(uint8_t roomX, uint8_t roomy);
        int8_t spawnNewEntity(EntityType, Entity& spawner);

        void updateTitle(uint8_t frame);
        void renderTitle(uint8_t frame);

        void updatePlay(uint8_t frame);
        void renderPlay(uint8_t frame);

        void updateRoomTransition(uint8_t frame);
        void renderRoomTransition(uint8_t frame);

        void updateTeleportTransition(uint8_t frame);
        void renderTeleportTransition(uint8_t frame);

        void updateGameOver(uint8_t frame);
        void renderGameOver(uint8_t frame);

        void updateMenu(uint8_t frame);
        void renderMenu(uint8_t frame);

        void push(UpdatePtr newUpdate, RenderPtr newRender);
        void pop();

        void loadSave(bool straightToPlay = false);

    public:
        Entity entities[MAX_ENTITIES];

        void removeAllTriggerDoors(void);
        void emergeAllBridges(void);

        Game(Arduboy2Base& arduboy, Renderer& renderer):
            arduboy(arduboy),
            renderer(renderer),
            titleRow(0),
            player(WIDTH / 2 - 4, HEIGHT / 2 - 4),
            nextRoomX(0),
            nextRoomY(0),
            roomType(NORMAL),
            bossDelayCount(0),
            menu(),
            roomTransitionCount(0),
            firstRoomTransitionFrame(false),
            teleportTransitionCount(0),
            prevUpdate(NULL),
            currentUpdate(&Game::updateTitle),
            nextUpdate(NULL),
            prevRender(NULL),
            currentRender(&Game::renderTitle),
            nextRender(NULL),
            swapRooms(false)
        {
        }

        void update(uint8_t frame);
        void render(uint8_t frame);
};

#endif

