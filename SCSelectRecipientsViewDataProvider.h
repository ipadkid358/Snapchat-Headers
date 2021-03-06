/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:37 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSearchableRecipientDataProviderDelegate.h>

@protocol SCSelectRecipientsViewDataProviderDelegate;
@class SCRecentRecipientDataProvider, SCNewFriendRecipientDataProvider, SCSelectRecipientsConfiguration, SCUserSession, NSMutableDictionary, NSArray, NSString;

@interface SCSelectRecipientsViewDataProvider : NSObject <SCSearchableRecipientDataProviderDelegate> {

	SCRecentRecipientDataProvider* _recentRecipientDataProvider;
	SCNewFriendRecipientDataProvider* _newFriendRecipientDataProvider;
	id<SCSelectRecipientsViewDataProviderDelegate> _delegate;
	SCSelectRecipientsConfiguration* _configuration;
	SCUserSession* _userSession;
	NSMutableDictionary* _allRecipients;
	NSArray* _searchableRecipientDataProviders;
	NSString* _lastQuery;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)clearSearch;
-(void)didUpdateAllRecipients:(id)arg1 ;
-(void)didUpdateFilteredRecipients:(id)arg1 ;
-(void)filterSearch:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)recipientInSection:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(id)initWithConfiguration:(id)arg1 userSession:(id)arg2 delegate:(id)arg3 ;
-(id)recipientsForSection:(unsigned long long)arg1 ;
-(id)friendInSection:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(id)chatGroupInSection:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(BOOL)isChatGroupInSection:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(BOOL)isFriendInSection:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)contactNonSnapchatterCountInSection:(unsigned long long)arg1 ;
-(BOOL)hasSearchResults;
@end

