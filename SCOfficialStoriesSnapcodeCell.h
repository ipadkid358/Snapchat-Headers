/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:50 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <Snapchat/SCProfileInfoContainerViewDelegate.h>
#import <Snapchat/SCProfilePictureControllerDelegate.h>

@protocol SCOfficialStoriesSnapcodeCellDelegate;
@class NSString, SCUserSession, UIButton, SCProfileInfoContainerView;

@interface SCOfficialStoriesSnapcodeCell : UITableViewCell <SCProfileInfoContainerViewDelegate, SCProfilePictureControllerDelegate> {

	NSString* _username;
	SCUserSession* _userSession;
	UIButton* _viewAnalyticsButton;
	SCProfileInfoContainerView* _profileContainerView;
	id<SCOfficialStoriesSnapcodeCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SCOfficialStoriesSnapcodeCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(double)snapcodeAndProfileInfoHeight;
-(void)shareSnapCodeForUsername:(id)arg1 ;
-(void)displayNamePressed;
-(void)snapCodeButtonPressed:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)shareUsernameButtonPressed:(id)arg1 ;
-(void)_setupSnapcodeViewForDisplayName:(id)arg1 profileImages:(id)arg2 ;
-(void)_setupViewAnalyticsButton;
-(void)_viewAnalyticsButtonPressed;
-(id)initWithUsername:(id)arg1 displayName:(id)arg2 profileImages:(id)arg3 userSession:(id)arg4 reuseIdentifier:(id)arg5 ;
-(void)setupProfilePictureDelegatesForController:(id)arg1 ;
-(void)setDelegate:(id<SCOfficialStoriesSnapcodeCellDelegate>)arg1 ;
-(id<SCOfficialStoriesSnapcodeCellDelegate>)delegate;
@end
