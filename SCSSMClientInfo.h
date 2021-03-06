/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:02 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class NSString, SCSSMAppInfo, SCSCOREGeoLocation, NSMutableArray, GPBInt64Array, SCSSMUserRecentTapHistory, SCSSMUserRecentInteractionsHistory, SCSSMConnectionInfo, SCSSMDeviceInfo;

@interface SCSSMClientInfo : GPBMessage

@property (nonatomic,copy) NSString * userId; 
@property (nonatomic,retain) SCSSMAppInfo * appInfo; 
@property (assign,nonatomic) BOOL hasAppInfo; 
@property (nonatomic,retain) SCSCOREGeoLocation * location; 
@property (assign,nonatomic) BOOL hasLocation; 
@property (nonatomic,copy) NSString * countryCode; 
@property (nonatomic,copy) NSString * locale; 
@property (nonatomic,retain) NSMutableArray * languagePreferencesArray; 
@property (nonatomic,readonly) unsigned long long languagePreferencesArray_Count; 
@property (nonatomic,copy) NSString * timeZone; 
@property (nonatomic,retain) GPBInt64Array * lastInteractionTimestampsMsArray; 
@property (nonatomic,readonly) unsigned long long lastInteractionTimestampsMsArray_Count; 
@property (nonatomic,retain) SCSSMUserRecentTapHistory * tapHistory; 
@property (assign,nonatomic) BOOL hasTapHistory; 
@property (nonatomic,retain) SCSSMUserRecentInteractionsHistory * interactionsHistory; 
@property (assign,nonatomic) BOOL hasInteractionsHistory; 
@property (assign,nonatomic) int userGender; 
@property (assign,nonatomic) int userAge; 
@property (nonatomic,copy) NSString * userName; 
@property (nonatomic,copy) NSString * userEmail; 
@property (assign,nonatomic) BOOL isEmployee; 
@property (assign,nonatomic) BOOL soundIsOn; 
@property (nonatomic,retain) SCSSMConnectionInfo * connectionInfo; 
@property (assign,nonatomic) BOOL hasConnectionInfo; 
@property (nonatomic,retain) SCSSMDeviceInfo * deviceInfo; 
@property (assign,nonatomic) BOOL hasDeviceInfo; 
@property (assign,nonatomic) BOOL isNewUser; 
@property (assign,nonatomic) BOOL userRegisteredInCheetah; 
+(id)descriptor;
@end

