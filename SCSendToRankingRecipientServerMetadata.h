/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:15 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSDictionary;

@interface SCSendToRankingRecipientServerMetadata : NSObject <NSCopying, NSCoding> {

	NSString* _recipientId;
	NSString* _recipientType;
	NSDictionary* _serverSideSignals;

}

@property (nonatomic,copy,readonly) NSString * recipientId;                        //@synthesize recipientId=_recipientId - In the implementation block
@property (nonatomic,copy,readonly) NSString * recipientType;                      //@synthesize recipientType=_recipientType - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * serverSideSignals;              //@synthesize serverSideSignals=_serverSideSignals - In the implementation block
-(NSString *)recipientId;
-(NSDictionary *)serverSideSignals;
-(id)initWithRecipientId:(id)arg1 recipientType:(id)arg2 serverSideSignals:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)recipientType;
@end

