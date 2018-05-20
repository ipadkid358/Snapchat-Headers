/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:32 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCContextCardController.h>
#import <Snapchat/SCContextUserCardDelegate.h>
#import <Snapchat/SCMiniProfileViewControllerDelegate.h>

@protocol SCContextCardActionDelegate;
@class Friend, NSString, FriendStories, SCContextPlayStoryAction, SCSearchFriendProvider;

@interface SCContextPersonCardController : SCContextCardController <SCContextUserCardDelegate, SCMiniProfileViewControllerDelegate> {

	Friend* _friend;
	NSString* _feedIconName;
	long long _style;
	FriendStories* _friendStories;
	SCContextPlayStoryAction* _thumbnailAction;
	id<SCContextCardActionDelegate> _actionDelegate;
	SCSearchFriendProvider* _friendProvider;
	long long _addSourceType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)miniProfileController:(id)arg1 wantsToNavigateToChatWithDeepLinkURL:(id)arg2 ;
-(CGSize)sizeForCell;
-(void)cardWasTapped:(id)arg1 ;
-(void)attachCardView:(id)arg1 ;
-(id)cellTypeIdentifier;
-(void)cardWasLongPressed:(id)arg1 ;
-(id)initWithCard:(id)arg1 session:(id)arg2 actionDelegate:(id)arg3 ;
-(void)_fetchFriend:(id)arg1 ;
-(long long)_sojuAddSourceTypeFromProto:(int)arg1 ;
-(void)_updateViewWithFriend;
-(void)didTapStoryThumbnail:(id)arg1 ;
-(Class)cellClass;
@end
