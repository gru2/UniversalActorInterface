#ifndef __UAI_H
#define __UAI_H

#include <stdlib.h>

struct UaiMessage
{
	char *data;
	size_t len;
};

struct UaiMessage *getInfo();
void *createActor(int actorType);
void freeActor(void *actor);
struct UaiMessage *getMessage(void *actor);
void putMessage(void *actor, struct UaiMessage *msg);
void run(void *actor);
void start(void *actor);
void setCallback(void *actor, void *param, void (*callback)(void *param));
void cancel(void *actor);
void reset(void *actor);

#endif

