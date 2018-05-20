/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Snapchat/Snapchat-Structs.h>
@class NSString, SCAdsStories;

@interface SCSnapAdsPortalAd : NSObject {

	NSString* _adId;
	SCAdsStories* _adsStories;
	long long _adsStoriesLoadStatus;
	NSString* _adsStoriesThumbnailKey;
	NSString* _responseJson;

}

@property (assign,nonatomic) long long adsStoriesLoadStatus;                        //@synthesize adsStoriesLoadStatus=_adsStoriesLoadStatus - In the implementation block
@property (nonatomic,copy,readonly) NSString * adId;                                //@synthesize adId=_adId - In the implementation block
@property (nonatomic,readonly) SCAdsStories * adsStories;                           //@synthesize adsStories=_adsStories - In the implementation block
@property (nonatomic,copy,readonly) NSString * adsStoriesThumbnailKey;              //@synthesize adsStoriesThumbnailKey=_adsStoriesThumbnailKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * responseJson;                        //@synthesize responseJson=_responseJson - In the implementation block
+(id)_requiredAdCreativePreviewProperties;
-(NSString *)adId;
-(NSString *)responseJson;
-(SCAdsStories *)adsStories;
-(BOOL)_isValidSOJUAd:(id)arg1 requiredProperties:(id)arg2 ;
-(void)_initAdsStories:(id)arg1 ;
-(void)setAdsStoriesLoadStatus:(long long)arg1 ;
-(long long)adsStoriesLoadStatus;
-(void)_generateThumbnailKey;
-(id)getAdsStoryAtIndex:(long long)arg1 ;
-(BOOL)hasAdsStories;
-(id)initFromSOJUSnapAdsPortalAd:(id)arg1 ;
-(void)fetchAdsStoriesWithUserSession:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(NSString *)adsStoriesThumbnailKey;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

