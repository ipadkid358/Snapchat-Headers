/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:10 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SCSnapAdsImpressionDataBuilder : NSObject
+(id)buildWithOnlyAdType:(id)arg1 ;
+(id)build:(id)arg1 firedThirdPartyURLs:(id)arg2 ;
+(id)_threeVImpressionTrack:(id)arg1 adSnapTrackInfo:(id)arg2 adThirdPartyTrackInfo:(id)arg3 ;
+(id)_appInstallImpressionTrack:(id)arg1 adSnapTrackInfo:(id)arg2 adThirdPartyTrackInfo:(id)arg3 ;
+(id)_longformVideoImpressionTrack:(id)arg1 adSnapTrackInfo:(id)arg2 adThirdPartyTrackInfo:(id)arg3 ;
+(id)_remoteWebpageImpressionTrack:(id)arg1 adSnapTrackInfo:(id)arg2 adThirdPartyTrackInfo:(id)arg3 ;
+(id)_localWebpageImpressionTrack:(id)arg1 adSnapTrackInfo:(id)arg2 adThirdPartyTrackInfo:(id)arg3 ;
+(id)_storyImpressionTrack:(id)arg1 ;
+(id)_deepLinkAttachmentImpressionTrack:(id)arg1 adSnapTrackInfo:(id)arg2 adThirdPartyTrackInfo:(id)arg3 ;
+(id)_noFillImpressionTrack;
+(id)_subscribeAttachmentImpressionTrack:(id)arg1 adSnapTrackInfo:(id)arg2 ;
+(id)getAdFlagData:(id)arg1 ;
+(BOOL)_isPromotedStory:(id)arg1 ;
+(id)_promotedStoryImpressionTrack:(id)arg1 ;
+(id)_multiSnapImpressionTrack:(id)arg1 ;
+(id)_getStoryImpressionWithEngagementTrackBuilder:(id)arg1 ;
@end
