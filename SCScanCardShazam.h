/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:48 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCScanCardTableViewCell.h>
#import <Snapchat/SCScanCardShazamProtocol.h>

@protocol SCScanCardShazamDelegate;
@class UIView, UIImageView, UILabel, UIButton, NSURL, SCSongInfo, NSString, SCShazamOperaPresenter, PreviewViewController, UIImage, SCUserSession, SCShazamShareController;

@interface SCScanCardShazam : SCScanCardTableViewCell <SCScanCardShazamProtocol> {

	UIView* _headerCircularBackground;
	UIImageView* _imageView;
	UIView* _separatorView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIButton* _openButton;
	UIButton* _cancelButton;
	UIButton* _sendButton;
	UIButton* _shareButton;
	NSURL* _songURL;
	SCSongInfo* _songInfo;
	BOOL _ifConsumed;
	NSString* _openButtonTitle;
	SCShazamOperaPresenter* _presenter;
	PreviewViewController* _previewViewController;
	UIImage* _topSnapImageWithTitle;
	SCUserSession* _userSession;
	SCShazamShareController* _currentShareController;
	id<SCScanCardShazamDelegate> shazamDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SCScanCardShazamDelegate> shazamDelegate; 
-(void)_didTapShareButton;
-(void)_didTapOpenButton;
-(void)transitionToContentAnimated:(BOOL)arg1 ;
-(id<SCScanCardShazamDelegate>)shazamDelegate;
-(void)setShazamDelegate:(id<SCScanCardShazamDelegate>)arg1 ;
-(id)initWithSongInfo:(id)arg1 userSession:(id)arg2 ;
-(void)_didTapCancelButton;
-(void)_didTapHeader;
-(void)sendSongHistoryToServer:(id)arg1 ;
-(void)_didTapSendButton;
-(void)updateStyle;
@end

