#include "inGameMenu.h"
#include "spriteBitmaps.h"
#include "tileBitmaps.h"
#include "util.h"
#include "state.h"
#include "strings.h"
#include "hud.h"
#include "itemSprites.h"

void InGameMenu::update(Arduboy2Base& arduboy, byte frame) {
    const int8_t maxRows = State::gameState.numAcquiredItems;

    if (maxRows == 0) {
        return;
    }

    if (arduboy.justPressed(UP_BUTTON)) {
        row = Util::clamp(row - 1, 0, maxRows - 1);
    }

    if (arduboy.justPressed(DOWN_BUTTON)) {
        row = Util::clamp(row + 1, 0, maxRows - 1);
    }

    chosenItem = row + 1;
}

void InGameMenu::render(Renderer& renderer, Player& player, uint8_t frame) {
    // draw bomb count
    Hud::drawItemCount(renderer, key_plus_mask, 1, 48, State::gameState.numKeys);
    Hud::drawItemCount(renderer, bomb_plus_mask, 0, 30, player.numBombs);

    const uint8_t x = 20;

    renderer.drawString(x, 0, equip_string);
    // boundary rectangle
    renderer.drawRect(x, 6, 21, 27, WHITE);

    // items
    for (uint8_t i = 0; i < State::gameState.numAcquiredItems; ++i) {

        if (i == row) {
            renderer.drawOverwrite(x + 3, 9 + 12 * i, hudBFrame_tiles, 0);
        }

        const uint8_t* itemBmp = pgm_read_ptr(secondaryItem_sprites + i);
        renderer.drawPlusMask(x + 10, 9 + 12 * i, itemBmp, 0, 0, true);
    }

}