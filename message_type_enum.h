#ifndef MESSAGE_TYPE_ENUM_H
#define MESSAGE_TYPE_ENUM_H

#endif // MESSAGE_TYPE_ENUM_H

enum Message_Type_Enum{
    SYSTEM_MESSAGE_TYPE = 0x00000001,
    CHAT_MESSAGE_TYPE = 0x00000002,

};

/*
 * 系统消息类型
 */
enum System_Message_Type_Enum{
    SYSTEM_NOTICE_MESSAGE = 0x00000001, // 系统通知

};

/*
 * 聊天消息类型
 */
enum Chat_Message_Type_Enum{
    HISTORY_MESSAGE = 0x0000001, // 历史消息

};
