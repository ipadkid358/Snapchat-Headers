/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:38 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, SCLensLaunchData;

@interface SCLensEffectActivatorConfigurationBuilder : NSObject {

	NSString* _filterOverlayImagePath;
	SCLensLaunchData* _launchConfiguration;
	NSString* _lensSessionId;
	BOOL _async;

}
+(id)withLensEffectActivatorConfiguration:(id)arg1 ;
-(id)setLensSessionId:(id)arg1 ;
-(id)setLaunchConfiguration:(id)arg1 ;
-(id)setFilterOverlayImagePath:(id)arg1 ;
-(id)build;
-(id)setAsync:(BOOL)arg1 ;
@end

