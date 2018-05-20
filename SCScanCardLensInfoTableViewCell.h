/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:48 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCScanCardTableViewCell.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Snapchat/SCScanCardOpenUrlProtocol.h>

@protocol SCScanCardOpenUrlDelegate;
@class SCLens, NSString, SCScanCardButton, UIImageView, SCFuturedThumbnailView, UIView, UILabel, NSURL, SCOpenUrlOperaViewPresenter, SCUserSession;

@interface SCScanCardLensInfoTableViewCell : SCScanCardTableViewCell <UIGestureRecognizerDelegate, SCScanCardOpenUrlProtocol> {

	SCLens* _lens;
	NSString* _displayUsername;
	NSString* _fallbackTitle;
	NSRange _linkRange;
	BOOL _creatorHasBitmojiAvatar;
	SCScanCardButton* _okButton;
	UIImageView* _thumbnailImageView;
	SCFuturedThumbnailView* _creatorAvatarView;
	UIView* _headerBackgroundView;
	UILabel* _creatorUserNameLabel;
	UILabel* _lensNameLabel;
	UIView* _divider;
	UILabel* _createdWithLabel;
	NSURL* _lensStudioUrl;
	SCOpenUrlOperaViewPresenter* _openUrlPresenter;
	SCUserSession* _userSession;
	id<SCScanCardOpenUrlDelegate> openUrlDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SCScanCardOpenUrlDelegate> openUrlDelegate; 
-(void)transitionToContentAnimated:(BOOL)arg1 ;
-(id<SCScanCardOpenUrlDelegate>)openUrlDelegate;
-(void)setOpenUrlDelegate:(id<SCScanCardOpenUrlDelegate>)arg1 ;
-(id)initWithLens:(id)arg1 userSession:(id)arg2 ;
-(id)_creatorAvatarImage;
-(void)_tapCreatedWithLabel:(id)arg1 ;
-(void)_setupBrowser;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_dismiss;
-(void)updateStyle;
@end

