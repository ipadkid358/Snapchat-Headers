/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:19 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCOnDemandGeofilterSearchViewCellViewModel.h>
@class NSString, NSAttributedString;


@protocol SCOnDemandGeofilterSearchViewCellViewModel <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * imageKey; 
@property (nonatomic,copy,readonly) NSAttributedString * address; 
@property (nonatomic,copy,readonly) NSString * region; 
@property (nonatomic,copy,readonly) NSString * distance; 
@required
-(NSString *)distance;
-(NSString *)region;
-(NSAttributedString *)address;
-(NSString *)imageKey;

@end


@class NSString, NSAttributedString;

@interface SCOnDemandGeofilterSearchViewCellViewModel : NSObject <SCOnDemandGeofilterSearchViewCellViewModel> {

	NSString* _imageKey;
	NSAttributedString* _address;
	NSString* _region;
	NSString* _distance;

}

@property (nonatomic,copy,readonly) NSString * imageKey;                       //@synthesize imageKey=_imageKey - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * address;              //@synthesize address=_address - In the implementation block
@property (nonatomic,copy,readonly) NSString * region;                         //@synthesize region=_region - In the implementation block
@property (nonatomic,copy,readonly) NSString * distance;                       //@synthesize distance=_distance - In the implementation block
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
-(id)initWithImageKey:(id)arg1 address:(id)arg2 region:(id)arg3 distance:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)distance;
-(NSString *)region;
-(NSAttributedString *)address;
-(NSString *)imageKey;
@end

