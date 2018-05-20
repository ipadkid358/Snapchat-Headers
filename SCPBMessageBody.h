/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class SCPBMedia, NSMutableArray, SCPBSticker, SCPBSnapchatter, NSString, SCPBStoryShare, SCPBSnapMetadata, SCPBKhaleesiShare, SCPBNycShare, SCPBSearchShareStorySnap, SCPBSearchShareStory, SCPBMediaSave, SCPBMessageParcel;

@interface SCPBMessageBody : GPBMessage

@property (nonatomic,retain) SCPBMedia * media; 
@property (assign,nonatomic) BOOL hasMedia; 
@property (nonatomic,retain) NSMutableArray * mediasArray; 
@property (nonatomic,readonly) unsigned long long mediasArray_Count; 
@property (nonatomic,retain) SCPBSticker * sticker; 
@property (assign,nonatomic) BOOL hasSticker; 
@property (nonatomic,retain) SCPBSnapchatter * snapchatter; 
@property (assign,nonatomic) BOOL hasSnapchatter; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) int typeVersion; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) NSMutableArray * attributesArray; 
@property (nonatomic,readonly) unsigned long long attributesArray_Count; 
@property (nonatomic,retain) NSMutableArray * mediaCardAttributesArray; 
@property (nonatomic,readonly) unsigned long long mediaCardAttributesArray_Count; 
@property (nonatomic,copy) NSString * storyTitle; 
@property (nonatomic,retain) SCPBStoryShare * storyShare; 
@property (assign,nonatomic) BOOL hasStoryShare; 
@property (assign,nonatomic) int obfuscation; 
@property (nonatomic,retain) SCPBSnapMetadata * snapMetadata; 
@property (assign,nonatomic) BOOL hasSnapMetadata; 
@property (nonatomic,retain) SCPBKhaleesiShare * khaleesiShare; 
@property (assign,nonatomic) BOOL hasKhaleesiShare; 
@property (nonatomic,retain) SCPBNycShare * nycShare; 
@property (assign,nonatomic) BOOL hasNycShare; 
@property (nonatomic,retain) SCPBSearchShareStorySnap * searchShareStorySnap; 
@property (assign,nonatomic) BOOL hasSearchShareStorySnap; 
@property (nonatomic,retain) SCPBSearchShareStory * searchShareStory; 
@property (assign,nonatomic) BOOL hasSearchShareStory; 
@property (nonatomic,retain) SCPBMediaSave * mediaSave; 
@property (assign,nonatomic) BOOL hasMediaSave; 
@property (nonatomic,retain) NSMutableArray * replyMediasArray; 
@property (nonatomic,readonly) unsigned long long replyMediasArray_Count; 
@property (nonatomic,retain) NSMutableArray * messagePalletArray; 
@property (nonatomic,readonly) unsigned long long messagePalletArray_Count; 
@property (assign,nonatomic) long long sendStartTimestamp; 
@property (assign,nonatomic) BOOL isScreenRecording; 
@property (nonatomic,retain) SCPBMessageParcel * messageParcel; 
@property (assign,nonatomic) BOOL hasMessageParcel; 
+(id)descriptor;
@end
