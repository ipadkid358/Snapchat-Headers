/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:13 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCSnapCashBlocker.h>
@class NSURL;


@protocol SCSnapCashBlocker <NSObject,NSCoding,NSCopying,NSObject>
@property (nonatomic,readonly) long long blockerType; 
@property (nonatomic,copy,readonly) NSURL * url; 
@property (nonatomic,readonly) BOOL requiresPasscode; 
@required
-(long long)blockerType;
-(BOOL)requiresPasscode;
-(NSURL *)url;

@end


@class NSURL, NSString;

@interface SCSnapCashBlocker : NSObject <SCSnapCashBlocker> {

	BOOL _requiresPasscode;
	long long _blockerType;
	NSURL* _url;

}

@property (nonatomic,readonly) long long blockerType;               //@synthesize blockerType=_blockerType - In the implementation block
@property (nonatomic,copy,readonly) NSURL * url;                    //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) BOOL requiresPasscode;               //@synthesize requiresPasscode=_requiresPasscode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)fasterCodingVersion;
+(unsigned long long*)fasterCodingKeys;
-(BOOL)preferFasterCoding;
-(void)encodeWithFasterCoder:(id)arg1 ;
-(void)decodeWithFasterDecoder:(id)arg1 ;
-(void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(void)setBool:(BOOL)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(void)setSInt32:(int)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(long long)blockerType;
-(id)initWithBlockerType:(long long)arg1 url:(id)arg2 requiresPasscode:(BOOL)arg3 ;
-(BOOL)requiresPasscode;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSURL *)url;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)comparePriority:(id)arg1 ;
@end

