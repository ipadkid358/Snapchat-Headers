/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class NSString, SCPBSnapMetadata, NSMutableArray;

@interface SCPBSnap : GPBMessage

@property (nonatomic,copy) NSString * id_p; 
@property (assign,nonatomic) int st; 
@property (assign,nonatomic) int m; 
@property (assign,nonatomic) long long ts; 
@property (assign,nonatomic) long long sts; 
@property (assign,nonatomic) BOOL zipped; 
@property (assign,nonatomic) long long pts; 
@property (assign,nonatomic) int orientation; 
@property (nonatomic,retain) SCPBSnapMetadata * snapMetadata; 
@property (assign,nonatomic) BOOL hasSnapMetadata; 
@property (assign,nonatomic) long long sendStartTimestamp; 
@property (nonatomic,retain) NSMutableArray * replyMediasArray; 
@property (nonatomic,readonly) unsigned long long replyMediasArray_Count; 
@property (assign,nonatomic) long long seqNum; 
+(id)descriptor;
@end

