/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:30 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCChatConversationStoreListener.h>

@protocol SCFriendFeedRequester;
@class SOJUFriendFeedRequest, NSString;

@interface SCFriendFeedRequestPrecreator : NSObject <SCChatConversationStoreListener> {

	id<SCFriendFeedRequester> _requester;
	SOJUFriendFeedRequest* _precreatedRequest;
	double _precreatedRequestCreationStartTime;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)conversationDidUpdate:(id)arg1 withMetadataDictionary:(id)arg2 ;
-(void)diskLoadFinished;
-(void)_createAndCacheOneRequest;
-(void)_createAndCacheOneRequestIfAppNotActive;
-(id)initWithFriendFeedRequester:(id)arg1 ;
-(void)didUpdateMetadataForFriendFeedRequest;
-(id)precreatedRequestAndSetToNil;
-(void)appDidEnterBackground;
@end

