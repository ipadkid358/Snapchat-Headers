/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:34 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, Friend, SVGDocumentView, UIView, UIActivityIndicatorView, SCPulsingView;

@interface SCSnapcodeView : UIView {

	double _snapcodeWidth;
	int _session;
	UIImageView* _snapcodePlaceholder;
	BOOL _snapcodeLoaded;
	BOOL _profilePictureLoaded;
	Friend* _friend;
	BOOL _animatesBitmojiTransition;
	SVGDocumentView* _snapcodeSVGView;
	UIView* _backgroundView;
	UIImageView* _profilePictureView;
	UIActivityIndicatorView* _loadingIndicator;
	SCPulsingView* _bitmojiLoadingView;

}

@property (nonatomic,retain) UIActivityIndicatorView * loadingIndicator;              //@synthesize loadingIndicator=_loadingIndicator - In the implementation block
@property (nonatomic,retain) SCPulsingView * bitmojiLoadingView;                      //@synthesize bitmojiLoadingView=_bitmojiLoadingView - In the implementation block
@property (nonatomic,readonly) SVGDocumentView * snapcodeSVGView;                     //@synthesize snapcodeSVGView=_snapcodeSVGView - In the implementation block
@property (assign,nonatomic) BOOL animatesBitmojiTransition;                          //@synthesize animatesBitmojiTransition=_animatesBitmojiTransition - In the implementation block
@property (nonatomic,readonly) UIView * backgroundView;                               //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIImageView * profilePictureView;                        //@synthesize profilePictureView=_profilePictureView - In the implementation block
+(id)snapcodeViewForFriend:(id)arg1 contexts:(id)arg2 width:(double)arg3 userSession:(id)arg4 ;
+(id)snapcodeViewForFriend:(id)arg1 contexts:(id)arg2 width:(double)arg3 borderWidth:(double)arg4 userSession:(id)arg5 ;
+(id)snapcodeViewForScannableInfo:(id)arg1 width:(double)arg2 borderWidth:(double)arg3 ;
+(id)snapcodeViewForScannableInfo:(id)arg1 width:(double)arg2 ;
-(id)profileImages;
-(id)initWithFrame:(CGRect)arg1 borderWidth:(double)arg2 ;
-(void)updateWithCurrentUserWithContexts:(id)arg1 userSession:(id)arg2 ;
-(void)setAnimatesBitmojiTransition:(BOOL)arg1 ;
-(void)updateWithFriend:(id)arg1 contexts:(id)arg2 userSession:(id)arg3 ;
-(id)friendPictureStatus;
-(void)updateWithScannableInfo:(id)arg1 ;
-(void)_resetSnapcodeViewForBitmoji:(BOOL)arg1 ;
-(id)_getLensFromScannableInfo:(id)arg1 ;
-(void)_startLoadingForBitmoji:(BOOL)arg1 ;
-(void)_renderSnapcodeForLens:(id)arg1 scanDataId:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_renderPreviewImageForLens:(id)arg1 ;
-(void)_drawBitmojiImage:(id)arg1 ;
-(void)updateWithProfileImages:(id)arg1 userId:(id)arg2 bitmojiAvatarId:(id)arg3 bitmojiSelfieId:(id)arg4 contexts:(id)arg5 userSession:(id)arg6 ;
-(void)_renderSnapcodeForUsername:(id)arg1 currentSession:(int)arg2 shouldRenderBitmoji:(BOOL)arg3 contexts:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)_renderBitmojiForUserId:(id)arg1 avatarId:(id)arg2 selfieId:(id)arg3 currentSession:(int)arg4 contexts:(id)arg5 userSession:(id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)_renderProfilePictureWithFriend:(id)arg1 contexts:(id)arg2 currentSession:(int)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_renderProfileImages:(id)arg1 contexts:(id)arg2 currentSession:(int)arg3 completionBlock:(/*^block*/id)arg4 ;
-(BOOL)_drawSnapcode:(id)arg1 ;
-(void)_hideSnapcode:(BOOL)arg1 ;
-(void)_stopLoadingWithSuccess:(BOOL)arg1 ;
-(void)_hideProfilePicture:(BOOL)arg1 ;
-(void)_drawProfileImages:(id)arg1 ;
-(void)updateWidth:(double)arg1 borderWidth:(double)arg2 ;
-(UIImageView *)profilePictureView;
-(BOOL)animatesBitmojiTransition;
-(BOOL)_drawSnapcode:(id)arg1 removeWhiteBackground:(BOOL)arg2 ;
-(SVGDocumentView *)snapcodeSVGView;
-(SCPulsingView *)bitmojiLoadingView;
-(void)updateWidth:(double)arg1 ;
-(id)bitmojiImage;
-(void)setProfilePictureView:(UIImageView *)arg1 ;
-(void)setBitmojiLoadingView:(SCPulsingView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHidden:(BOOL)arg1 ;
-(UIView *)backgroundView;
-(void)setLoadingIndicator:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)loadingIndicator;
@end

