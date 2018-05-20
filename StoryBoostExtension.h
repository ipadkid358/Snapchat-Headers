/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:02 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class NSString, GPBEnumArray, SCSCOREGeoBoundingBox, Pinned, Boosted, NSMutableArray;

@interface StoryBoostExtension : GPBMessage

@property (nonatomic,copy) NSString * countryCode; 
@property (nonatomic,retain) GPBEnumArray * ageArray; 
@property (nonatomic,readonly) unsigned long long ageArray_Count; 
@property (nonatomic,retain) GPBEnumArray * genderArray; 
@property (nonatomic,readonly) unsigned long long genderArray_Count; 
@property (assign,nonatomic) long long activationTimestampSecs; 
@property (assign,nonatomic) long long expirationTimestampSecs; 
@property (nonatomic,retain) SCSCOREGeoBoundingBox * geoFence; 
@property (assign,nonatomic) BOOL hasGeoFence; 
@property (nonatomic,readonly) int boostTypeOneOfCase; 
@property (nonatomic,retain) Pinned * pinned; 
@property (nonatomic,retain) Boosted * boosted; 
@property (nonatomic,retain) NSMutableArray * languagesArray; 
@property (nonatomic,readonly) unsigned long long languagesArray_Count; 
@property (assign,nonatomic) BOOL newUser; 
@property (assign,nonatomic) BOOL preCheetah; 
@property (assign,nonatomic) int hideAfterWatch; 
@property (assign,nonatomic) BOOL hideTimestamp; 
@property (assign,nonatomic) BOOL shouldIgnoreHoldout; 
+(id)descriptor;
@end

