/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class NSString, SCPBIdentityMischiefMetadata, NSMutableArray, GPBStringInt64Dictionary, SCPBLastMischiefChatAction, SCPBVideoChatParams, SCPBLastMischiefContent, NSMutableDictionary;

@interface SCPBIdentityMischief : GPBMessage

@property (nonatomic,copy) NSString * mischiefId; 
@property (nonatomic,retain) SCPBIdentityMischiefMetadata * mischiefMetadata; 
@property (assign,nonatomic) BOOL hasMischiefMetadata; 
@property (nonatomic,copy) NSString * mischiefName; 
@property (nonatomic,retain) NSMutableArray * participantsArray; 
@property (nonatomic,readonly) unsigned long long participantsArray_Count; 
@property (nonatomic,retain) NSMutableArray * exParticipantsArray; 
@property (nonatomic,readonly) unsigned long long exParticipantsArray_Count; 
@property (assign,nonatomic) long long createMischiefTimestamp; 
@property (assign,nonatomic) long long lastInteractionTimestamp; 
@property (assign,nonatomic) long long lastClearedTimestamp; 
@property (nonatomic,retain) GPBStringInt64Dictionary * latestSequenceNumbers; 
@property (nonatomic,readonly) unsigned long long latestSequenceNumbers_Count; 
@property (nonatomic,retain) SCPBLastMischiefChatAction * lastMischiefChatAction; 
@property (assign,nonatomic) BOOL hasLastMischiefChatAction; 
@property (nonatomic,retain) NSMutableArray * stickerFavoritesArray; 
@property (nonatomic,readonly) unsigned long long stickerFavoritesArray_Count; 
@property (nonatomic,copy) NSString * iterToken; 
@property (nonatomic,copy) NSString * contentType; 
@property (nonatomic,retain) NSMutableArray * contentArray; 
@property (nonatomic,readonly) unsigned long long contentArray_Count; 
@property (nonatomic,retain) NSMutableArray * contentOrderArray; 
@property (nonatomic,readonly) unsigned long long contentOrderArray_Count; 
@property (nonatomic,retain) NSMutableArray * chatMessagesArray; 
@property (nonatomic,readonly) unsigned long long chatMessagesArray_Count; 
@property (nonatomic,retain) NSMutableArray * releaseMessagesArray; 
@property (nonatomic,readonly) unsigned long long releaseMessagesArray_Count; 
@property (nonatomic,retain) NSMutableArray * updateMessagesArray; 
@property (nonatomic,readonly) unsigned long long updateMessagesArray_Count; 
@property (assign,nonatomic) BOOL notificationStatus; 
@property (nonatomic,retain) SCPBVideoChatParams * videoChatParams; 
@property (assign,nonatomic) BOOL hasVideoChatParams; 
@property (assign,nonatomic) BOOL earlierContentExists; 
@property (nonatomic,retain) GPBStringInt64Dictionary * earliestSequenceNumbers; 
@property (nonatomic,readonly) unsigned long long earliestSequenceNumbers_Count; 
@property (nonatomic,retain) NSMutableArray * messageStateMessagesArray; 
@property (nonatomic,readonly) unsigned long long messageStateMessagesArray_Count; 
@property (nonatomic,retain) NSMutableArray * snapStateMessagesArray; 
@property (nonatomic,readonly) unsigned long long snapStateMessagesArray_Count; 
@property (assign,nonatomic) BOOL laterContentExists; 
@property (nonatomic,retain) SCPBLastMischiefContent * lastMischiefContent; 
@property (assign,nonatomic) BOOL hasLastMischiefContent; 
@property (nonatomic,retain) GPBStringInt64Dictionary * blockedParticipantExceptions; 
@property (nonatomic,readonly) unsigned long long blockedParticipantExceptions_Count; 
@property (nonatomic,retain) GPBStringInt64Dictionary * pageLatestSequenceNumbers; 
@property (nonatomic,readonly) unsigned long long pageLatestSequenceNumbers_Count; 
@property (nonatomic,retain) NSMutableDictionary * participantLastContent; 
@property (nonatomic,readonly) unsigned long long participantLastContent_Count; 
@property (nonatomic,copy) NSString * mischiefMobId; 
@property (assign,nonatomic) BOOL isStoryMuted; 
@property (nonatomic,copy) NSString * creatorId; 
@property (nonatomic,copy) NSString * mischiefCreationSource; 
@property (nonatomic,retain) NSMutableDictionary * seenChatSequenceNumbers; 
@property (nonatomic,readonly) unsigned long long seenChatSequenceNumbers_Count; 
@property (nonatomic,retain) NSMutableArray * messageEraseMessagesArray; 
@property (nonatomic,readonly) unsigned long long messageEraseMessagesArray_Count; 
+(id)descriptor;
@end

