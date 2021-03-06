/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:40 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCFriendLocationsListener.h>
#import <Snapchat/SCLocationShareWithFriendControllerShareFlowDelegate.h>
#import <Snapchat/SCFriendEventListener.h>

@protocol SCChatLocationSharingControllerDelegate;
@class NSArray, NSString, SCUserSession, SCLocationShareWithFriendController;

@interface SCChatLocationSharingController : NSObject <SCFriendLocationsListener, SCLocationShareWithFriendControllerShareFlowDelegate, SCFriendEventListener> {

	NSArray* _cellTypes;
	BOOL _isGroup;
	NSString* _groupId;
	NSArray* _friendUserIds;
	SCUserSession* _userSession;
	long long _sourceType;
	SCLocationShareWithFriendController* _shareWithFriendController;
	unsigned long long _locationRequestStatusFor1on1;
	BOOL _hasSentLocationAlready;
	BOOL _hasLoggedViewMetricsYet;
	id<SCChatLocationSharingControllerDelegate> _delegate;

}

@property (nonatomic,readonly) NSArray * cellTypes; 
@property (assign,nonatomic,__weak) id<SCChatLocationSharingControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)incomingFriendsDidUpdate:(id)arg1 updateType:(unsigned long long)arg2 context:(id)arg3 ;
-(void)outgoingFriendsDidUpdate:(id)arg1 updateType:(unsigned long long)arg2 context:(id)arg3 ;
-(void)friendLocationsDidChange:(id)arg1 affectedUserIds:(id)arg2 ;
-(void)locationShareWithFriendController:(id)arg1 wantsToPresentViewController:(id)arg2 ;
-(NSArray *)cellTypes;
-(id)userIdsForFriendsWithLocations;
-(BOOL)shouldShowExitGhostModeLabelOnShareLocationButton;
-(void)didPressCellWithType:(unsigned long long)arg1 ;
-(id)initWithGroupId:(id)arg1 sourceType:(long long)arg2 userSession:(id)arg3 ;
-(id)initWithFriendUserId:(id)arg1 sourceType:(long long)arg2 userSession:(id)arg3 ;
-(void)_refreshLocationRequestStatusFor1on1;
-(void)_sharingPrefsDidUpdate;
-(void)_ensureLocationPreferencesFetched;
-(void)_logViewMetricsIfAppropriate;
-(void)_updateCellTypesAnimated:(BOOL)arg1 ;
-(void)requestLocationFromFriendWithId:(id)arg1 ;
-(void)_shareLocationWithAllIncludedFriends;
-(void)_sendLocationMessage;
-(void)setDelegate:(id<SCChatLocationSharingControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<SCChatLocationSharingControllerDelegate>)delegate;
-(void)_commonInit;
@end

