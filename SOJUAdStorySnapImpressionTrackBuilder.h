/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:50 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSString, SOJUAdThreeVImpressionTrack, SOJUAdAppInstallImpressionTrack, SOJUAdLongformVideoImpressionTrack, SOJUAdRemoteWebpageImpressionTrack, SOJUAdLocalWebpageImpressionTrack, SOJUAdDeepLinkImpressionTrack, SOJUAdSubscribeImpressionTrack;

@interface SOJUAdStorySnapImpressionTrackBuilder : NSObject {

	NSNumber* _snapIndex;
	NSNumber* _swipeUpCount;
	NSString* _skipEvent;
	NSString* _adType;
	SOJUAdThreeVImpressionTrack* _threeV;
	SOJUAdAppInstallImpressionTrack* _appInstall;
	SOJUAdLongformVideoImpressionTrack* _longformVideo;
	SOJUAdRemoteWebpageImpressionTrack* _remoteWebpage;
	SOJUAdLocalWebpageImpressionTrack* _localWebpage;
	SOJUAdDeepLinkImpressionTrack* _deepLink;
	SOJUAdSubscribeImpressionTrack* _subscribe;

}
+(id)withJUAdStorySnapImpressionTrack:(id)arg1 ;
-(id)setAdTypeEnum:(long long)arg1 ;
-(id)setAdType:(id)arg1 ;
-(id)setThreeV:(id)arg1 ;
-(id)setAppInstall:(id)arg1 ;
-(id)setLongformVideo:(id)arg1 ;
-(id)setRemoteWebpage:(id)arg1 ;
-(id)setLocalWebpage:(id)arg1 ;
-(id)setSubscribe:(id)arg1 ;
-(id)setSnapIndexValue:(int)arg1 ;
-(id)setSwipeUpCountValue:(int)arg1 ;
-(id)setSnapIndex:(id)arg1 ;
-(id)setSwipeUpCount:(id)arg1 ;
-(id)setSkipEvent:(id)arg1 ;
-(id)build;
-(id)setDeepLink:(id)arg1 ;
@end

