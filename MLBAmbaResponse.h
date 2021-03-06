/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:59 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class MLBAuthResponse, MLBMediaResponse, MLBLogResponse, MLBFirmwareUpdateUploadResponse;

@interface MLBAmbaResponse : GPBMessage

@property (assign,nonatomic) unsigned long long requestId; 
@property (assign,nonatomic) BOOL hasRequestId; 
@property (assign,nonatomic) int status; 
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) BOOL requestComplete; 
@property (assign,nonatomic) BOOL hasRequestComplete; 
@property (nonatomic,retain) MLBAuthResponse * authResponse; 
@property (assign,nonatomic) BOOL hasAuthResponse; 
@property (nonatomic,retain) MLBMediaResponse * mediaResponse; 
@property (assign,nonatomic) BOOL hasMediaResponse; 
@property (nonatomic,retain) MLBLogResponse * logResponse; 
@property (assign,nonatomic) BOOL hasLogResponse; 
@property (nonatomic,retain) MLBFirmwareUpdateUploadResponse * fwUpdateUploadResponse; 
@property (assign,nonatomic) BOOL hasFwUpdateUploadResponse; 
@property (assign,nonatomic) int wifiSharingStatus; 
@property (assign,nonatomic) BOOL hasWifiSharingStatus; 
+(id)descriptor;
@end

