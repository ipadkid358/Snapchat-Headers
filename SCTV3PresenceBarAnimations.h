/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:11 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCTV3PresenceBarAnimations.h>

@protocol SCTV3PresenceBarAnimations <NSObject>
@required
-(/*^block*/id)enterFullscreenAnimation;
-(/*^block*/id)exitFullscreenAnimation;
-(/*^block*/id)changeMediaAnimation;
-(/*^block*/id)changePresenceOrderAnimation;

@end


@class NSString;

@interface SCTV3PresenceBarAnimations : NSObject <SCTV3PresenceBarAnimations> {

	/*^block*/id _changeMediaAnimation;
	/*^block*/id _changePresenceOrderAnimation;
	/*^block*/id _enterFullscreenAnimation;
	/*^block*/id _exitFullscreenAnimation;

}

@property (nonatomic,copy) id changeMediaAnimation;                      //@synthesize changeMediaAnimation=_changeMediaAnimation - In the implementation block
@property (nonatomic,copy) id changePresenceOrderAnimation;              //@synthesize changePresenceOrderAnimation=_changePresenceOrderAnimation - In the implementation block
@property (nonatomic,copy) id enterFullscreenAnimation;                  //@synthesize enterFullscreenAnimation=_enterFullscreenAnimation - In the implementation block
@property (nonatomic,copy) id exitFullscreenAnimation;                   //@synthesize exitFullscreenAnimation=_exitFullscreenAnimation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)enterFullscreenAnimation;
-(id)exitFullscreenAnimation;
-(void)setEnterFullscreenAnimation:(id)arg1 ;
-(void)setExitFullscreenAnimation:(id)arg1 ;
-(id)changeMediaAnimation;
-(id)changePresenceOrderAnimation;
-(void)setChangeMediaAnimation:(id)arg1 ;
-(void)setChangePresenceOrderAnimation:(id)arg1 ;
@end

