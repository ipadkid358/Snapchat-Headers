/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:12 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCChatMediaDownloadableItem.h>

@class SCContributionStoryPublisher, NSString;

@interface SCChatContributionStoryPublisherDownloadableItem : NSObject <SCChatMediaDownloadableItem> {

	SCContributionStoryPublisher* _publisher;
	NSString* _conversationId;

}

@property (nonatomic,copy,readonly) SCContributionStoryPublisher * publisher;              //@synthesize publisher=_publisher - In the implementation block
@property (nonatomic,copy,readonly) NSString * conversationId;                             //@synthesize conversationId=_conversationId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithContributionStoryPublisher:(id)arg1 conversationId:(id)arg2 ;
-(NSString *)conversationId;
-(id)mediaId;
-(SCContributionStoryPublisher *)publisher;
@end

