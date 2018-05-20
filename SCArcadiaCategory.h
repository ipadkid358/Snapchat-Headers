/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:23 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCLensDiscoveryCategory.h>
#import <Snapchat/SCArcadiaCategory.h>
@class NSString;


@protocol SCArcadiaCategory <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * tag; 
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) BOOL hasMore; 
@required
-(BOOL)hasMore;
-(unsigned long long)count;
-(NSString *)title;
-(NSString *)tag;

@end


@class NSString;

@interface SCArcadiaCategory : NSObject <SCLensDiscoveryCategory, SCArcadiaCategory> {

	BOOL _hasMore;
	NSString* _title;
	NSString* _tag;
	unsigned long long _count;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * categoryId; 
@property (nonatomic,readonly) BOOL hasMore; 
@property (nonatomic,copy,readonly) NSString * title;                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * tag;                     //@synthesize tag=_tag - In the implementation block
@property (nonatomic,readonly) unsigned long long count;                //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) BOOL hasMore;                            //@synthesize hasMore=_hasMore - In the implementation block
+(unsigned long long)fasterCodingVersion;
+(unsigned long long*)fasterCodingKeys;
-(NSString *)categoryId;
-(BOOL)preferFasterCoding;
-(void)encodeWithFasterCoder:(id)arg1 ;
-(void)decodeWithFasterDecoder:(id)arg1 ;
-(void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(void)setBool:(BOOL)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(void)setUInt64:(unsigned long long)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(BOOL)hasMore;
-(id)initWithTitle:(id)arg1 tag:(id)arg2 count:(unsigned long long)arg3 hasMore:(BOOL)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)tag;
@end

