/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:51 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUCommerceOrderList.h>
@class NSArray, NSString;


@protocol SOJUCommerceOrderList <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSArray * orders; 
@property (nonatomic,copy,readonly) NSString * prevUrl; 
@property (nonatomic,copy,readonly) NSString * nextUrl; 
@required
-(NSArray *)orders;
-(NSString *)prevUrl;
-(NSString *)nextUrl;

@end


@class NSArray, NSString;

@interface SOJUCommerceOrderList : NSObject <SOJUCommerceOrderList> {

	NSArray* _orders;
	NSString* _prevUrl;
	NSString* _nextUrl;

}

@property (nonatomic,copy,readonly) NSArray * orders;                //@synthesize orders=_orders - In the implementation block
@property (nonatomic,copy,readonly) NSString * prevUrl;              //@synthesize prevUrl=_prevUrl - In the implementation block
@property (nonatomic,copy,readonly) NSString * nextUrl;              //@synthesize nextUrl=_nextUrl - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)fasterCodingVersion;
+(unsigned long long*)fasterCodingKeys;
+(BOOL)canInitFromProto;
-(BOOL)preferFasterCoding;
-(void)encodeWithFasterCoder:(id)arg1 ;
-(void)decodeWithFasterDecoder:(id)arg1 ;
-(void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(id)toJson;
-(NSArray *)orders;
-(NSString *)prevUrl;
-(NSString *)nextUrl;
-(id)initWithOrders:(id)arg1 prevUrl:(id)arg2 nextUrl:(id)arg3 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)toDictionary;
@end

