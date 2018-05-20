/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:09 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSDate;

@interface SCRulefile : NSObject <NSCoding> {

	NSString* _uniqueId;
	NSDate* _lastUpdated;
	NSString* _signature;
	NSString* _javascriptString;
	NSString* _versionId;
	unsigned long long _ttlInSec;

}

@property (nonatomic,copy,readonly) NSString * uniqueId;                      //@synthesize uniqueId=_uniqueId - In the implementation block
@property (nonatomic,readonly) NSDate * lastUpdated;                          //@synthesize lastUpdated=_lastUpdated - In the implementation block
@property (nonatomic,copy,readonly) NSString * signature;                     //@synthesize signature=_signature - In the implementation block
@property (nonatomic,copy,readonly) NSString * javascriptString;              //@synthesize javascriptString=_javascriptString - In the implementation block
@property (nonatomic,copy,readonly) NSString * versionId;                     //@synthesize versionId=_versionId - In the implementation block
@property (nonatomic,readonly) unsigned long long ttlInSec;                   //@synthesize ttlInSec=_ttlInSec - In the implementation block
-(NSString *)javascriptString;
-(NSString *)versionId;
-(unsigned long long)ttlInSec;
-(id)initWithRuleFileId:(id)arg1 signature:(id)arg2 javascriptString:(id)arg3 ttlInSec:(unsigned long long)arg4 versionId:(id)arg5 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)uniqueId;
-(NSDate *)lastUpdated;
-(NSString *)signature;
@end

