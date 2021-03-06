/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:07 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCCacheKeyKindEntry.h>
@class NSString, NSDate, NSNumber;


@protocol SCCacheKeyKindEntry <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * key; 
@property (nonatomic,copy,readonly) NSString * kind; 
@property (nonatomic,copy,readonly) NSDate * expirationDate; 
@property (nonatomic,copy,readonly) NSNumber * referenceCount; 
@property (nonatomic,readonly) BOOL isUnwrappedData; 
@required
-(BOOL)isUnwrappedData;
-(NSString *)key;
-(NSString *)kind;
-(NSDate *)expirationDate;
-(NSNumber *)referenceCount;

@end


@class NSString, NSDate, NSNumber;

@interface SCCacheKeyKindEntry : NSObject <SCCacheKeyKindEntry> {

	BOOL _isUnwrappedData;
	NSString* _key;
	NSString* _kind;
	NSDate* _expirationDate;
	NSNumber* _referenceCount;

}

@property (nonatomic,copy,readonly) NSString * key;                         //@synthesize key=_key - In the implementation block
@property (nonatomic,copy,readonly) NSString * kind;                        //@synthesize kind=_kind - In the implementation block
@property (nonatomic,copy,readonly) NSDate * expirationDate;                //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * referenceCount;              //@synthesize referenceCount=_referenceCount - In the implementation block
@property (nonatomic,readonly) BOOL isUnwrappedData;                        //@synthesize isUnwrappedData=_isUnwrappedData - In the implementation block
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
-(id)adjustReferenceCount:(long long)arg1 expiration:(id)arg2 ;
-(BOOL)isUnwrappedData;
-(id)initWithKey:(id)arg1 kind:(id)arg2 expirationDate:(id)arg3 referenceCount:(id)arg4 isUnwrappedData:(BOOL)arg5 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)key;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)kind;
-(NSDate *)expirationDate;
-(BOOL)isExpired;
-(NSNumber *)referenceCount;
@end

