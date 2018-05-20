/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:25 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCCameraVolumeButtonHandlerDelegate;
@class NSString;

@interface SCCameraVolumeButtonHandler : NSObject {

	NSString* _secretFeatureToken;
	BOOL _pressingButton1;
	BOOL _pressingButton2;
	BOOL _stopsHandlingWhenPressingEnds;
	id<SCCameraVolumeButtonHandlerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SCCameraVolumeButtonHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)startHandlingVolumeButtonEvents;
-(void)stopHandlingVolumeButtonEvents;
-(BOOL)isHandlingVolumeButtonEvents;
-(void)_handleButton1Down:(id)arg1 ;
-(void)_handleButton1Up:(id)arg1 ;
-(void)_handleButton2Down:(id)arg1 ;
-(void)_handleButton2Up:(id)arg1 ;
-(void)_resetPressingButtons;
-(BOOL)isPressingVolumeButton;
-(void)_changePressingButton:(/*^block*/id)arg1 ;
-(void)stopHandlingVolumeButtonEventsWhenPressingEnds;
-(id)init;
-(void)setDelegate:(id<SCCameraVolumeButtonHandlerDelegate>)arg1 ;
-(void)dealloc;
-(id<SCCameraVolumeButtonHandlerDelegate>)delegate;
@end
