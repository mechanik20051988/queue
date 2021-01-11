#pragma once

#include <stdbool.h>

#if defined(__cplusplus)
extern "C" {
#endif /* defined(__cplusplus) */

struct xtm_queue;

struct xtm_queue *
xtm_create(unsigned size, int max_input);

void
xtm_delete(struct xtm_queue *queue);

int
xtm_fd(const struct xtm_queue *queue);

bool
xtm_msg_send(struct xtm_queue *queue, void *msg);

bool
xtm_msg_enqueue(struct xtm_queue *queue, void *msg);

bool
xtm_msg_notify(struct xtm_queue *queue);

unsigned
xtm_msg_recv(struct xtm_queue *queue, void **data, unsigned max_count);

#if defined(__cplusplus)
} /* extern "C" */
#endif /* defined(__cplusplus) */
