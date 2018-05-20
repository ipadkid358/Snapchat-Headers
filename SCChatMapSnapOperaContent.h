/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:28 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCChatStorySnapShareOperaContent.h>

@class SCStorySnapMediaContent, NSString, NSDate;

@interface SCChatMapSnapOperaContent : NSObject <SCChatStorySnapShareOperaContent> {

	NSString* _conversationId;
	SCStorySnapMediaContent* _media;
	NSString* _messageId;
	NSString* _messageSender;
	NSDate* _messageTimestamp;
	long long _messageType;
	NSString* _storySnapId;
	NSString* _pointOfInterestId;

}

@property (nonatomic,readonly) NSString * storySnapId;                       //@synthesize storySnapId=_storySnapId - In the implementation block
@property (nonatomic,readonly) NSString * pointOfInterestId;                 //@synthesize pointOfInterestId=_pointOfInterestId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * conversationId;               //@synthesize conversationId=_conversationId - In the implementation block
@property (nonatomic,copy,readonly) NSString * messageId;                    //@synthesize messageId=_messageId - In the implementation block
@property (nonatomic,readonly) long long messageType;                        //@synthesize messageType=_messageType - In the implementation block
@property (nonatomic,copy,readonly) NSString * messageSender;                //@synthesize messageSender=_messageSender - In the implementation block
@property (nonatomic,copy,readonly) NSDate * messageTimestamp;               //@synthesize messageTimestamp=_messageTimestamp - In the implementation block
@property (nonatomic,readonly) NSString * operaPageId; 
@property (nonatomic,readonly) SCStorySnapMediaContent * media;              //@synthesize media=_media - In the implementation block
-(NSString *)storySnapId;
-(NSDate *)messageTimestamp;
-(NSString *)operaPageId;
-(BOOL)isContentLoadedInCache;
-(BOOL)isContentUnarchived;
-(BOOL)isLoadStateFailed;
-(void)loadContent;
-(void)unarchiveContentWithCompletion:(/*^block*/id)arg1 ;
-(void)invalidateContent;
-(id)initWithConversationId:(id)arg1 messageId:(id)arg2 storySnapId:(id)arg3 pointOfInterestId:(id)arg4 media:(id)arg5 messageType:(long long)arg6 messageSender:(id)arg7 messageTimestamp:(id)arg8 ;
-(NSString *)pointOfInterestId;
-(NSString *)conversationId;
-(long long)mediaType;
-(SCStorySnapMediaContent *)media;
-(NSString *)messageId;
-(long long)messageType;
-(NSString *)messageSender;
@end
