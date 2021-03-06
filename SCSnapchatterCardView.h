/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:28 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCBaseMediaCardView.h>
#import <Snapchat/SCFriendProfileCellViewDelegate.h>
#import <Snapchat/SCActionMenuRenderableCellContentView.h>

@protocol SCSnapchatterCardViewDelegate;
@class SCSnapchatterCardViewModel, SCFriendProfileCellView, UITapGestureRecognizer, NSString;

@interface SCSnapchatterCardView : SCBaseMediaCardView <SCFriendProfileCellViewDelegate, SCActionMenuRenderableCellContentView> {

	SCSnapchatterCardViewModel* _viewModel;
	SCFriendProfileCellView* _profileView;
	BOOL _friendNotAdded;
	UITapGestureRecognizer* _tapGestureRecognizer;
	id<SCSnapchatterCardViewDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)friendProfileCellView:(id)arg1 addFriendPressed:(id)arg2 friend:(id)arg3 ;
-(void)resetWithOriginalSettings;
-(void)rerenderForActionMenuWithBoundingSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 hasBorder:(BOOL)arg2 delegate:(id)arg3 ;
-(void)setViewModel:(id)arg1 userSession:(id)arg2 ;
-(void)onTap:(id)arg1 ;
-(void)_initProfileView;
-(void)_updateProfileView:(id)arg1 withFriend:(id)arg2 userSession:(id)arg3 ;
-(id)_requestContext;
@end

