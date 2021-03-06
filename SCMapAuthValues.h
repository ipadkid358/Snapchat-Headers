/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:17 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSDate, NSString;

@interface SCMapAuthValues : NSObject <NSCoding> {

	BOOL _blockUse;
	NSDate* _date;
	NSString* _userId;
	NSString* _accessToken;
	NSString* _mapcraftAccessToken;
	NSString* _blockUseText;

}

@property (nonatomic,copy) NSDate * date;                               //@synthesize date=_date - In the implementation block
@property (nonatomic,copy) NSString * userId;                           //@synthesize userId=_userId - In the implementation block
@property (nonatomic,copy) NSString * accessToken;                      //@synthesize accessToken=_accessToken - In the implementation block
@property (nonatomic,copy) NSString * mapcraftAccessToken;              //@synthesize mapcraftAccessToken=_mapcraftAccessToken - In the implementation block
@property (assign,nonatomic) BOOL blockUse;                             //@synthesize blockUse=_blockUse - In the implementation block
@property (nonatomic,copy) NSString * blockUseText;                     //@synthesize blockUseText=_blockUseText - In the implementation block
-(BOOL)blockUse;
-(NSString *)blockUseText;
-(void)setBlockUse:(BOOL)arg1 ;
-(void)setBlockUseText:(NSString *)arg1 ;
-(NSString *)mapcraftAccessToken;
-(void)setMapcraftAccessToken:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(void)setAccessToken:(NSString *)arg1 ;
-(NSString *)userId;
-(void)setUserId:(NSString *)arg1 ;
-(NSString *)accessToken;
@end

