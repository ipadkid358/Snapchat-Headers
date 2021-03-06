/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:24 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCFeatureTapToFocusAndExposure.h>

@protocol SCCapturer;
@class SCCameraOverlayView, NSArray, NSString;

@interface SCFeatureTapToFocusAndExposureImpl : NSObject <SCFeatureTapToFocusAndExposure> {

	BOOL _userTappedToFocusAndExposure;
	id<SCCapturer> _capturer;
	SCCameraOverlayView* _cameraOverlay;
	NSArray* _commands;

}

@property (assign,nonatomic,__weak) id<SCCapturer> capturer;                          //@synthesize capturer=_capturer - In the implementation block
@property (assign,nonatomic,__weak) SCCameraOverlayView * cameraOverlay;              //@synthesize cameraOverlay=_cameraOverlay - In the implementation block
@property (assign,nonatomic) BOOL userTappedToFocusAndExposure;                       //@synthesize userTappedToFocusAndExposure=_userTappedToFocusAndExposure - In the implementation block
@property (nonatomic,retain) NSArray * commands;                                      //@synthesize commands=_commands - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)configureWithView:(id)arg1 ;
-(void)forwardCameraOverlayTapGesture:(id)arg1 ;
-(id<SCCapturer>)capturer;
-(id)initWithCapturer:(id)arg1 commands:(id)arg2 ;
-(void)setCapturer:(id<SCCapturer>)arg1 ;
-(SCCameraOverlayView *)cameraOverlay;
-(void)setCameraOverlay:(SCCameraOverlayView *)arg1 ;
-(void)_applyTapCommands:(CGPoint)arg1 ;
-(void)_showTapAnimationAtPoint:(CGPoint)arg1 forGesture:(id)arg2 ;
-(void)setUserTappedToFocusAndExposure:(BOOL)arg1 ;
-(BOOL)userTappedToFocusAndExposure;
-(void)reset;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
@end

