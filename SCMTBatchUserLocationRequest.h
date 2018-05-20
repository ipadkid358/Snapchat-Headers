/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:00 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class NSMutableArray, SCMTDeviceData, SCMTKalmanData, SCMTSpectaclesInfo, NSString;

@interface SCMTBatchUserLocationRequest : GPBMessage

@property (nonatomic,retain) NSMutableArray * locationUpdateArray; 
@property (nonatomic,readonly) unsigned long long locationUpdateArray_Count; 
@property (nonatomic,retain) SCMTDeviceData * deviceData; 
@property (assign,nonatomic) BOOL hasDeviceData; 
@property (nonatomic,retain) NSMutableArray * bleBeaconIdArray; 
@property (nonatomic,readonly) unsigned long long bleBeaconIdArray_Count; 
@property (assign,nonatomic) long long sequenceNumber; 
@property (assign,nonatomic) BOOL ghostMode; 
@property (nonatomic,retain) SCMTKalmanData * locationKalmanData; 
@property (assign,nonatomic) BOOL hasLocationKalmanData; 
@property (assign,nonatomic) BOOL isEmployee; 
@property (assign,nonatomic) BOOL hasBirthday; 
@property (assign,nonatomic) long long birthday; 
@property (assign,nonatomic) BOOL isBirthday; 
@property (nonatomic,retain) SCMTSpectaclesInfo * spectaclesInfo; 
@property (assign,nonatomic) BOOL hasSpectaclesInfo; 
@property (nonatomic,copy) NSString * username; 
+(id)descriptor;
@end

