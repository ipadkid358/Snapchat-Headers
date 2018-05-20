/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:50 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCAudioStitch.h>
#import <Snapchat/SOJUAudioStitch.h>
@class NSString, NSNumber, NSArray;


@protocol SOJUAudioStitch <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * audioStitchId; 
@property (nonatomic,copy,readonly) NSNumber * snapsPerRow; 
@property (nonatomic,copy,readonly) NSNumber * snapsPerColumn; 
@property (nonatomic,copy,readonly) NSArray * snaps; 
@required
-(NSString *)audioStitchId;
-(NSNumber *)snapsPerRow;
-(NSNumber *)snapsPerColumn;
-(NSArray *)snaps;

@end


@class NSString, NSNumber, NSArray;

@interface SOJUAudioStitch : NSObject <SCAudioStitch, SOJUAudioStitch> {

	NSString* _audioStitchId;
	NSNumber* _snapsPerRow;
	NSNumber* _snapsPerColumn;
	NSArray* _snaps;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * audioStitchId;               //@synthesize audioStitchId=_audioStitchId - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * snapsPerRow;                 //@synthesize snapsPerRow=_snapsPerRow - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * snapsPerColumn;              //@synthesize snapsPerColumn=_snapsPerColumn - In the implementation block
@property (nonatomic,copy,readonly) NSArray * snaps;                        //@synthesize snaps=_snaps - In the implementation block
+(unsigned long long)fasterCodingVersion;
+(unsigned long long*)fasterCodingKeys;
+(BOOL)canInitFromProto;
-(BOOL)preferFasterCoding;
-(void)encodeWithFasterCoder:(id)arg1 ;
-(void)decodeWithFasterDecoder:(id)arg1 ;
-(void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(id)toJson;
-(int)snapsPerRowValue;
-(int)snapsPerColumnValue;
-(NSString *)audioStitchId;
-(NSNumber *)snapsPerRow;
-(NSNumber *)snapsPerColumn;
-(NSArray *)snaps;
-(id)initWithAudioStitchId:(id)arg1 snapsPerRow:(id)arg2 snapsPerColumn:(id)arg3 snaps:(id)arg4 ;
-(id)initWithProtoBinary:(id)arg1 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithProtoBuf:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)toDictionary;
@end

