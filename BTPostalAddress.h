/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BTPostalAddress : NSObject <NSCopying> {

	NSString* _recipientName;
	NSString* _streetAddress;
	NSString* _extendedAddress;
	NSString* _locality;
	NSString* _countryCodeAlpha2;
	NSString* _postalCode;
	NSString* _region;

}

@property (nonatomic,copy) NSString * recipientName;                  //@synthesize recipientName=_recipientName - In the implementation block
@property (nonatomic,copy) NSString * streetAddress;                  //@synthesize streetAddress=_streetAddress - In the implementation block
@property (nonatomic,copy) NSString * extendedAddress;                //@synthesize extendedAddress=_extendedAddress - In the implementation block
@property (nonatomic,copy) NSString * locality;                       //@synthesize locality=_locality - In the implementation block
@property (nonatomic,copy) NSString * countryCodeAlpha2;              //@synthesize countryCodeAlpha2=_countryCodeAlpha2 - In the implementation block
@property (nonatomic,copy) NSString * postalCode;                     //@synthesize postalCode=_postalCode - In the implementation block
@property (nonatomic,copy) NSString * region;                         //@synthesize region=_region - In the implementation block
-(NSString *)streetAddress;
-(NSString *)extendedAddress;
-(NSString *)countryCodeAlpha2;
-(void)setStreetAddress:(NSString *)arg1 ;
-(void)setExtendedAddress:(NSString *)arg1 ;
-(void)setCountryCodeAlpha2:(NSString *)arg1 ;
-(NSString *)recipientName;
-(void)setRecipientName:(NSString *)arg1 ;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRegion:(NSString *)arg1 ;
-(NSString *)region;
-(NSString *)locality;
-(void)setLocality:(NSString *)arg1 ;
-(void)setPostalCode:(NSString *)arg1 ;
-(NSString *)postalCode;
@end

