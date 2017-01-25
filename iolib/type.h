#ifndef TYPE_H
#define TYPE_H


enum EventType {
    EVENT_NEW_CONNECTION,
    EVENT_NET_READ,
    EVENT_NET_WROTE,
    EVENT_NET_ERROR,
    EVENT_NET_CLOSE,
    EVENT_DISK_READ,
    EVENT_DISK_WROTE,
    EVENT_DISK_ERROR,
    EVENT_SYNC_DONE,
    EVENT_CMD_DONE,
    EVENT_INACTIVITY_TIMEOUT,
    EVENT_TIMEOUT
};


#endif