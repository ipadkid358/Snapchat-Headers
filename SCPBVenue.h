/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class NSString, NSMutableArray;

@interface SCPBVenue : GPBMessage

@property (nonatomic,copy) NSString * venueId; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * locality; 
@property (nonatomic,copy) NSString * filterId; 
@property (nonatomic,copy) NSString * subtitle; 
@property (assign,nonatomic) BOOL splitByServer; 
@property (nonatomic,copy) NSString * matchingGeofilterId; 
@property (assign,nonatomic) BOOL isExtra; 
@property (nonatomic,copy) NSString * venueName; 
@property (nonatomic,retain) NSMutableArray * categoriesArray; 
@property (nonatomic,readonly) unsigned long long categoriesArray_Count; 
+(id)descriptor;
@end

