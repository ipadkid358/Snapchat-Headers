/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:38 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCLensesUIAppearanceConfiguration.h>

@protocol SCLensesUIAppearanceConfiguration <NSObject,NSCoding,NSCopying>
@property (nonatomic,readonly) BOOL appearanceAnimationEnabled; 
@property (nonatomic,readonly) BOOL dismissible; 
@property (nonatomic,readonly) BOOL lensCategoryInitAnimationEnabled; 
@required
-(BOOL)appearanceAnimationEnabled;
-(BOOL)lensCategoryInitAnimationEnabled;
-(BOOL)dismissible;

@end


@class NSString;

@interface SCLensesUIAppearanceConfiguration : NSObject <SCLensesUIAppearanceConfiguration> {

	BOOL _appearanceAnimationEnabled;
	BOOL _dismissible;
	BOOL _lensCategoryInitAnimationEnabled;

}

@property (nonatomic,readonly) BOOL appearanceAnimationEnabled;                    //@synthesize appearanceAnimationEnabled=_appearanceAnimationEnabled - In the implementation block
@property (nonatomic,readonly) BOOL dismissible;                                   //@synthesize dismissible=_dismissible - In the implementation block
@property (nonatomic,readonly) BOOL lensCategoryInitAnimationEnabled;              //@synthesize lensCategoryInitAnimationEnabled=_lensCategoryInitAnimationEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)fasterCodingVersion;
+(unsigned long long*)fasterCodingKeys;
+(id)defaultConfigurationForLens:(id)arg1 ;
-(BOOL)preferFasterCoding;
-(void)encodeWithFasterCoder:(id)arg1 ;
-(void)decodeWithFasterDecoder:(id)arg1 ;
-(void)setBool:(BOOL)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(BOOL)appearanceAnimationEnabled;
-(BOOL)lensCategoryInitAnimationEnabled;
-(BOOL)dismissible;
-(id)initWithAppearanceAnimationEnabled:(BOOL)arg1 dismissible:(BOOL)arg2 lensCategoryInitAnimationEnabled:(BOOL)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

