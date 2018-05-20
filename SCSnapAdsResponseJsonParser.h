/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:10 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCSnapAdsAdMediaRenditionSelector;

@interface SCSnapAdsResponseJsonParser : NSObject {

	SCSnapAdsAdMediaRenditionSelector* _adMediaRenditionSelector;

}

@property (nonatomic,readonly) SCSnapAdsAdMediaRenditionSelector * adMediaRenditionSelector;              //@synthesize adMediaRenditionSelector=_adMediaRenditionSelector - In the implementation block
+(id)extractJsonData:(id)arg1 ;
+(id)parseResponseJson:(id)arg1 adIdentifier:(id)arg2 adProductType:(unsigned long long)arg3 renditionSelector:(id)arg4 clientRankingModel:(id)arg5 tfRankingModel:(id)arg6 blockWebviewPreloading:(BOOL)arg7 enableStreaming:(BOOL)arg8 ;
+(id)parseStringListParam:(id)arg1 paramName:(id)arg2 ;
+(void)parseMultiSnapContentLists:(id)arg1 mediaUrls:(id)arg2 adSnapKeys:(id)arg3 mediaDurationsMillis:(id)arg4 adSnapTypes:(id)arg5 adProductType:(unsigned long long)arg6 renditionSelector:(id)arg7 enableStreaming:(BOOL)arg8 ;
+(id)parseMediaUrl:(id)arg1 adProductType:(unsigned long long)arg2 renditionSelector:(id)arg3 enableStreaming:(BOOL)arg4 ;
+(BOOL)mediaURLsValid:(id)arg1 ;
+(id)parseRenditionsList:(id)arg1 enableStreaming:(BOOL)arg2 ;
+(id)parseRenditionsV2:(id)arg1 enableStreaming:(BOOL)arg2 ;
+(id)parseRenditionsV1:(id)arg1 ;
-(id)initWithRenditionSelector:(id)arg1 ;
-(id)parseProtoResponse:(id)arg1 requestId:(id)arg2 adIdentifier:(id)arg3 adProductType:(unsigned long long)arg4 clientRankingModel:(id)arg5 tfRankingModel:(id)arg6 blockWebviewPreloading:(BOOL)arg7 enableStreaming:(BOOL)arg8 ;
-(id)parseResponse:(id)arg1 adIdentifier:(id)arg2 adProductType:(unsigned long long)arg3 enableStreaming:(BOOL)arg4 ;
-(id)_parseResponseData:(id)arg1 requestId:(id)arg2 adIdentifier:(id)arg3 adProductType:(unsigned long long)arg4 clientRankingModel:(id)arg5 tfRankingModel:(id)arg6 blockWebviewPreloading:(BOOL)arg7 enableStreaming:(BOOL)arg8 ;
-(SCSnapAdsAdMediaRenditionSelector *)adMediaRenditionSelector;
@end

