/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:58 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class NSString, SCMT1ActionTiming, SCMT1Constrain, SCLocalizedStringSet;

@interface SCMT1Type : GPBMessage

@property (assign,nonatomic) long long id_p; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) SCMT1ActionTiming * timing; 
@property (assign,nonatomic) BOOL hasTiming; 
@property (nonatomic,retain) SCMT1Constrain * constrain; 
@property (assign,nonatomic) BOOL hasConstrain; 
@property (nonatomic,copy) NSString * place; 
@property (nonatomic,copy) NSString * event; 
@property (nonatomic,retain) SCLocalizedStringSet * placeName; 
@property (assign,nonatomic) BOOL hasPlaceName; 
@property (nonatomic,retain) SCLocalizedStringSet * eventName; 
@property (assign,nonatomic) BOOL hasEventName; 
@property (nonatomic,copy) NSString * venueId; 
+(id)descriptor;
@end

