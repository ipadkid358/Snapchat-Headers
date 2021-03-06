/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:31 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCFriendEventListener.h>
#import <Snapchat/SCSearchUpdateAnnouncing.h>

@protocol SCPerforming;
@class NSDictionary, SCSearchUpdateListenerAnnouncer, NSMutableSet, NSArray, NSNumber, NSString;

@interface SCCheetahQuickAddDataSource : NSObject <SCFriendEventListener, SCSearchUpdateAnnouncing> {

	id<SCPerforming> _performer;
	NSDictionary* _suggestedFriendsWithUsername;
	BOOL _newSuggestedFriendsUpdated;
	SCSearchUpdateListenerAnnouncer* _updateAnnouncer;
	NSMutableSet* _suggestedFriendsSeen;
	NSMutableSet* _suggestedFriendsAdded;
	NSArray* _rawSuggestedFriends;
	NSNumber* _impressionId;
	BOOL _suggestedFriendsSourceDidUpdate;
	BOOL _shouldDisplayQuickAddCarousel;
	unsigned long long _pageType;
	NSArray* _suggestedFriends;

}

@property (assign,nonatomic) unsigned long long pageType;                       //@synthesize pageType=_pageType - In the implementation block
@property (nonatomic,copy) NSArray * suggestedFriends;                          //@synthesize suggestedFriends=_suggestedFriends - In the implementation block
@property (nonatomic,readonly) BOOL shouldDisplayQuickAddCarousel;              //@synthesize shouldDisplayQuickAddCarousel=_shouldDisplayQuickAddCarousel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)announcerIdentifier;
-(void)addUpdateListener:(id)arg1 ;
-(void)removeUpdateListener:(id)arg1 ;
-(void)outgoingFriendsDidUpdate:(id)arg1 updateType:(unsigned long long)arg2 context:(id)arg3 ;
-(void)friendActionDidStart:(unsigned long long)arg1 ;
-(void)friendActionDidFail:(unsigned long long)arg1 ;
-(void)_generateImpressionId;
-(id)requestsContext;
-(id)initWithPageType:(unsigned long long)arg1 ;
-(void)updateForViewAppear;
-(void)updateForViewDidFullyDisappear;
-(id)friendWithUsername:(id)arg1 ;
-(void)logSeenSuggestedFriend:(id)arg1 ;
-(void)hideSuggestedFriend:(id)arg1 index:(unsigned long long)arg2 ;
-(void)addSuggestedFriend:(id)arg1 ;
-(void)hideAllSuggestedFriends;
-(NSArray *)suggestedFriends;
-(void)_updateDataSourceForViewAppearIfNecessary;
-(void)_updateForViewDidFullyDisappear;
-(void)_addSuggestedFriend:(id)arg1 ;
-(void)_removeSuggestFriend:(id)arg1 index:(unsigned long long)arg2 ;
-(void)_hideAllSuggestedFriends;
-(void)_logSeenSuggestedFriend:(id)arg1 ;
-(void)_didAddFriend:(id)arg1 ;
-(void)_setSuggestedFriendsDidUpdateFlag;
-(void)_buildFriendsForSuggestedFriends;
-(void)_updateSuggestedFriendsWithUsername;
-(void)_logSeenAndAddedSuggestedFriends;
-(void)setSuggestedFriends:(NSArray *)arg1 ;
-(BOOL)shouldDisplayQuickAddCarousel;
-(void)dealloc;
-(void)_reloadData;
-(void)setPageType:(unsigned long long)arg1 ;
-(unsigned long long)pageType;
@end

