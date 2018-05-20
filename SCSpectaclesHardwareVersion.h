/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:16 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@interface SCSpectaclesHardwareVersion : NSObject <NSCoding> {

	long long _majorVersion;
	long long _minorVersion;

}

@property (assign,nonatomic) long long majorVersion;              //@synthesize majorVersion=_majorVersion - In the implementation block
@property (assign,nonatomic) long long minorVersion;              //@synthesize minorVersion=_minorVersion - In the implementation block
+(id)_sharedVersionMatchingRegex;
+(id)malibuVersion;
+(id)lagunaVersion;
+(id)manhattanVersion;
-(BOOL)isMalibu;
-(BOOL)isLaguna;
-(BOOL)_parseVersionString:(id)arg1 ;
-(id)initWithMajorVersion:(long long)arg1 minorVersion:(long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(long long)compare:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(long long)majorVersion;
-(long long)minorVersion;
-(BOOL)isEqualToVersion:(id)arg1 ;
-(void)setMajorVersion:(long long)arg1 ;
-(void)setMinorVersion:(long long)arg1 ;
@end
