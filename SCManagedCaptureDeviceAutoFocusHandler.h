/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:24 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCManagedCaptureDeviceFocusHandler.h>

@class AVCaptureDevice, NSString;

@interface SCManagedCaptureDeviceAutoFocusHandler : NSObject <SCManagedCaptureDeviceFocusHandler> {

	BOOL _isContinuousAutofocus;
	BOOL _isFocusLock;
	AVCaptureDevice* _device;
	CGPoint _focusPointOfInterest;

}

@property (assign,nonatomic) CGPoint focusPointOfInterest;              //@synthesize focusPointOfInterest=_focusPointOfInterest - In the implementation block
@property (nonatomic,retain) AVCaptureDevice * device;                  //@synthesize device=_device - In the implementation block
@property (assign,nonatomic) BOOL isContinuousAutofocus;                //@synthesize isContinuousAutofocus=_isContinuousAutofocus - In the implementation block
@property (assign,nonatomic) BOOL isFocusLock;                          //@synthesize isFocusLock=_isFocusLock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDevice:(id)arg1 pointOfInterest:(CGPoint)arg2 ;
-(void)setAutofocusPointOfInterest:(CGPoint)arg1 ;
-(void)continuousAutofocus;
-(void)setFocusLock:(BOOL)arg1 ;
-(void)setSmoothFocus:(BOOL)arg1 ;
-(BOOL)isContinuousAutofocus;
-(void)setIsContinuousAutofocus:(BOOL)arg1 ;
-(BOOL)isFocusLock;
-(void)setIsFocusLock:(BOOL)arg1 ;
-(CGPoint)getFocusPointOfInterest;
-(void)setVisible:(BOOL)arg1 ;
-(CGPoint)focusPointOfInterest;
-(void)setFocusPointOfInterest:(CGPoint)arg1 ;
-(AVCaptureDevice *)device;
-(void)setDevice:(AVCaptureDevice *)arg1 ;
@end

