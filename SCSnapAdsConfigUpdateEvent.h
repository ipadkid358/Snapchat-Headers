/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:10 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSnapAdsBaseEvent.h>

@class SOJUAdTrackInfo, SOJUAdSourcesConfig, SOJUAdAdProductsConfig;

@interface SCSnapAdsConfigUpdateEvent : SCSnapAdsBaseEvent {

	SOJUAdTrackInfo* _adTrackInfo;
	SOJUAdSourcesConfig* _adSourcesConfig;
	SOJUAdAdProductsConfig* _adProductsConfig;

}

@property (nonatomic,retain) SOJUAdTrackInfo * adTrackInfo;                          //@synthesize adTrackInfo=_adTrackInfo - In the implementation block
@property (nonatomic,retain) SOJUAdSourcesConfig * adSourcesConfig;                  //@synthesize adSourcesConfig=_adSourcesConfig - In the implementation block
@property (nonatomic,retain) SOJUAdAdProductsConfig * adProductsConfig;              //@synthesize adProductsConfig=_adProductsConfig - In the implementation block
-(SOJUAdTrackInfo *)adTrackInfo;
-(SOJUAdSourcesConfig *)adSourcesConfig;
-(SOJUAdAdProductsConfig *)adProductsConfig;
-(void)setAdTrackInfo:(SOJUAdTrackInfo *)arg1 ;
-(void)setAdSourcesConfig:(SOJUAdSourcesConfig *)arg1 ;
-(void)setAdProductsConfig:(SOJUAdAdProductsConfig *)arg1 ;
@end
