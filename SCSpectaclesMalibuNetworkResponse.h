/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:16 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCSpectaclesNetworkResponse.h>

@class MLBAmbaResponse;

@interface SCSpectaclesMalibuNetworkResponse : SCSpectaclesNetworkResponse {

	MLBAmbaResponse* _malibuResponse;

}

@property (nonatomic,readonly) MLBAmbaResponse * malibuResponse;              //@synthesize malibuResponse=_malibuResponse - In the implementation block
+(unsigned long long)_fileTypeFromMediaType:(int)arg1 ;
+(unsigned long long)_convertShareWifiRequestStatus:(int)arg1 ;
-(id)logData;
-(unsigned long long)serializedSize;
-(id)mediaList;
-(NSRange)mediaDataRange;
-(id)logFileList;
-(unsigned long long)wifiSharingStatus;
-(MLBAmbaResponse *)malibuResponse;
-(id)initWithMalibuResponse:(id)arg1 ;
-(id)metadata;
-(long long)responseStatus;
-(id)mediaData;
@end

