/**
 * @file
 * @ingroup     net_maclow
 *
 * @brief       Fixed schedules
 *
 * @author Geovane Fedrecheski <geovane.fedrecheski@inria.fr>
 *
 * @copyright Inria, 2024
 */
#include "models.h"

#define MIRA_N_SCHEDULES 1 + 4 // account for the schedule that can be passed by the application during initialization

/* Schedule used for tests only. */
schedule_t schedule_test = {
    .id = 0xBF,
    .max_nodes = 0,
    .backoff_n_min = 5,
    .backoff_n_max = 9,
    .n_cells = 1,
    .cells = {
        // the channel offset doesn't matter here
        {'U', 0, NULL, NULL},
    }
};

/* Schedule with 11 slots, supporting up to 5 nodes */
schedule_t schedule_minuscule = {
    .id = 6,
    .max_nodes = 5,
    .backoff_n_min = 5,
    .backoff_n_max = 9,
    .n_cells = 11,
    .cells = {
        // Begin with beacon cells. They use their own channels and channel offsets.
        {'B', 0, NULL, NULL},
        {'B', 1, NULL, NULL},
        {'B', 2, NULL, NULL},
        // Continue with regular cells.
        {'S', 6, NULL, NULL},
        {'D', 3, NULL, NULL},
        {'U', 5, NULL, NULL},
        {'U', 1, NULL, NULL},
        {'D', 4, NULL, NULL},
        {'U', 0, NULL, NULL},
        {'U', 7, NULL, NULL},
        {'U', 2, NULL, NULL}
    }
};

/* Schedule with 17 slot_durations, supporting up to 11 nodes */
schedule_t schedule_tiny = {
    .id = 5,
    .max_nodes = 11,
    .backoff_n_min = 5,
    .backoff_n_max = 9,
    .n_cells = 17,
    .cells = {
        // Begin with beacon cells. They use their own channel offsets and frequencies.
        {'B', 0, NULL, NULL},
        {'B', 1, NULL, NULL},
        {'B', 2, NULL, NULL},
        // Continue with regular cells.
        {'S', 2, NULL, NULL},
        {'D', 5, NULL, NULL},
        {'U', 6, NULL, NULL},
        {'U', 13, NULL, NULL},
        {'U', 7, NULL, NULL},
        {'U', 0, NULL, NULL},
        {'D', 4, NULL, NULL},
        {'U', 10, NULL, NULL},
        {'U', 12, NULL, NULL},
        {'U', 1, NULL, NULL},
        {'U', 11, NULL, NULL},
        {'U', 8, NULL, NULL},
        {'U', 3, NULL, NULL},
        {'U', 9, NULL, NULL}
    }
};

/* Schedule with 137 slot_durations, supporting up to 101 nodes */
schedule_t schedule_huge = {
    .id = 1,
    .max_nodes = 101,
    .backoff_n_min = 5,
    .backoff_n_max = 9,
    .n_cells = 137,
    .cells = {
        {'B', 0, NULL, NULL},
        {'B', 1, NULL, NULL},
        {'B', 2, NULL, NULL},
        {'S', 9, NULL, NULL},
        {'D', 30, NULL, NULL},
        {'U', 33, NULL, NULL},
        {'U', 91, NULL, NULL},
        {'U', 43, NULL, NULL},
        {'U', 13, NULL, NULL},
        {'D', 103, NULL, NULL},
        {'U', 102, NULL, NULL},
        {'U', 83, NULL, NULL},
        {'U', 90, NULL, NULL},
        {'U', 0, NULL, NULL},
        {'U', 92, NULL, NULL},
        {'S', 11, NULL, NULL},
        {'D', 38, NULL, NULL},
        {'U', 59, NULL, NULL},
        {'U', 52, NULL, NULL},
        {'U', 114, NULL, NULL},
        {'U', 31, NULL, NULL},
        {'D', 7, NULL, NULL},
        {'U', 63, NULL, NULL},
        {'U', 104, NULL, NULL},
        {'U', 111, NULL, NULL},
        {'U', 53, NULL, NULL},
        {'U', 22, NULL, NULL},
        {'S', 130, NULL, NULL},
        {'D', 26, NULL, NULL},
        {'U', 80, NULL, NULL},
        {'U', 3, NULL, NULL},
        {'U', 125, NULL, NULL},
        {'U', 20, NULL, NULL},
        {'D', 65, NULL, NULL},
        {'U', 18, NULL, NULL},
        {'U', 96, NULL, NULL},
        {'U', 10, NULL, NULL},
        {'U', 37, NULL, NULL},
        {'U', 16, NULL, NULL},
        {'S', 101, NULL, NULL},
        {'D', 110, NULL, NULL},
        {'U', 12, NULL, NULL},
        {'U', 15, NULL, NULL},
        {'U', 55, NULL, NULL},
        {'U', 100, NULL, NULL},
        {'D', 123, NULL, NULL},
        {'U', 112, NULL, NULL},
        {'U', 40, NULL, NULL},
        {'U', 2, NULL, NULL},
        {'U', 21, NULL, NULL},
        {'U', 4, NULL, NULL},
        {'S', 47, NULL, NULL},
        {'D', 84, NULL, NULL},
        {'U', 58, NULL, NULL},
        {'U', 17, NULL, NULL},
        {'U', 60, NULL, NULL},
        {'U', 107, NULL, NULL},
        {'D', 49, NULL, NULL},
        {'U', 115, NULL, NULL},
        {'U', 126, NULL, NULL},
        {'U', 35, NULL, NULL},
        {'U', 36, NULL, NULL},
        {'U', 68, NULL, NULL},
        {'S', 93, NULL, NULL},
        {'D', 124, NULL, NULL},
        {'U', 79, NULL, NULL},
        {'U', 28, NULL, NULL},
        {'U', 14, NULL, NULL},
        {'U', 6, NULL, NULL},
        {'D', 72, NULL, NULL},
        {'U', 70, NULL, NULL},
        {'U', 86, NULL, NULL},
        {'U', 71, NULL, NULL},
        {'U', 81, NULL, NULL},
        {'U', 128, NULL, NULL},
        {'S', 97, NULL, NULL},
        {'D', 131, NULL, NULL},
        {'U', 45, NULL, NULL},
        {'U', 23, NULL, NULL},
        {'U', 50, NULL, NULL},
        {'U', 98, NULL, NULL},
        {'D', 106, NULL, NULL},
        {'U', 118, NULL, NULL},
        {'U', 77, NULL, NULL},
        {'U', 61, NULL, NULL},
        {'U', 8, NULL, NULL},
        {'U', 116, NULL, NULL},
        {'S', 108, NULL, NULL},
        {'D', 69, NULL, NULL},
        {'U', 119, NULL, NULL},
        {'U', 82, NULL, NULL},
        {'U', 74, NULL, NULL},
        {'U', 89, NULL, NULL},
        {'D', 99, NULL, NULL},
        {'U', 56, NULL, NULL},
        {'U', 109, NULL, NULL},
        {'U', 57, NULL, NULL},
        {'U', 46, NULL, NULL},
        {'U', 132, NULL, NULL},
        {'S', 44, NULL, NULL},
        {'D', 34, NULL, NULL},
        {'U', 39, NULL, NULL},
        {'U', 19, NULL, NULL},
        {'U', 85, NULL, NULL},
        {'U', 1, NULL, NULL},
        {'D', 27, NULL, NULL},
        {'U', 41, NULL, NULL},
        {'U', 5, NULL, NULL},
        {'U', 29, NULL, NULL},
        {'U', 32, NULL, NULL},
        {'U', 54, NULL, NULL},
        {'S', 25, NULL, NULL},
        {'D', 24, NULL, NULL},
        {'U', 120, NULL, NULL},
        {'U', 64, NULL, NULL},
        {'U', 117, NULL, NULL},
        {'U', 78, NULL, NULL},
        {'D', 94, NULL, NULL},
        {'U', 88, NULL, NULL},
        {'U', 127, NULL, NULL},
        {'U', 48, NULL, NULL},
        {'U', 87, NULL, NULL},
        {'U', 42, NULL, NULL},
        {'S', 75, NULL, NULL},
        {'D', 62, NULL, NULL},
        {'U', 51, NULL, NULL},
        {'U', 113, NULL, NULL},
        {'U', 73, NULL, NULL},
        {'U', 67, NULL, NULL},
        {'D', 121, NULL, NULL},
        {'U', 66, NULL, NULL},
        {'U', 122, NULL, NULL},
        {'U', 76, NULL, NULL},
        {'U', 95, NULL, NULL},
        {'U', 133, NULL, NULL},
        {'U', 105, NULL, NULL},
        {'U', 129, NULL, NULL}
    }
};
