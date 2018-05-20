/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class NSString, NSMutableArray, SCPBSignedPayload;

@interface SCPBHeader : GPBMessage

@property (nonatomic,copy) NSString * from; 
@property (nonatomic,retain) NSMutableArray * toArray; 
@property (nonatomic,readonly) unsigned long long toArray_Count; 
@property (nonatomic,copy) NSString * convId; 
@property (assign,nonatomic) BOOL isv3; 
@property (nonatomic,retain) SCPBSignedPayload * auth; 
@property (assign,nonatomic) BOOL hasAuth; 
@property (assign,nonatomic) long long connSeqNum; 
+(id)descriptor;
@end

