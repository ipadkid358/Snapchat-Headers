/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:24 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCManagedVideoCapturerOutputSettings.h>

@protocol SCManagedVideoCapturerOutputSettings <NSObject,NSCoding,NSCopying>
@property (nonatomic,readonly) double width; 
@property (nonatomic,readonly) double height; 
@property (nonatomic,readonly) double videoBitRate; 
@property (nonatomic,readonly) double audioBitRate; 
@property (nonatomic,readonly) unsigned long long keyFrameInterval; 
@property (nonatomic,readonly) long long outputType; 
@required
-(double)width;
-(double)height;
-(long long)outputType;
-(double)videoBitRate;
-(double)audioBitRate;
-(unsigned long long)keyFrameInterval;

@end


@class NSString;

@interface SCManagedVideoCapturerOutputSettings : NSObject <SCManagedVideoCapturerOutputSettings> {

	double _width;
	double _height;
	double _videoBitRate;
	double _audioBitRate;
	unsigned long long _keyFrameInterval;
	long long _outputType;

}

@property (nonatomic,readonly) double width;                                     //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) double height;                                    //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) double videoBitRate;                              //@synthesize videoBitRate=_videoBitRate - In the implementation block
@property (nonatomic,readonly) double audioBitRate;                              //@synthesize audioBitRate=_audioBitRate - In the implementation block
@property (nonatomic,readonly) unsigned long long keyFrameInterval;              //@synthesize keyFrameInterval=_keyFrameInterval - In the implementation block
@property (nonatomic,readonly) long long outputType;                             //@synthesize outputType=_outputType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)fasterCodingVersion;
+(unsigned long long*)fasterCodingKeys;
-(BOOL)preferFasterCoding;
-(void)encodeWithFasterCoder:(id)arg1 ;
-(void)decodeWithFasterDecoder:(id)arg1 ;
-(void)setSInt32:(int)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(void)setUInt64:(unsigned long long)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(void)setFloat64:(double)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(id)initWithWidth:(double)arg1 height:(double)arg2 videoBitRate:(double)arg3 audioBitRate:(double)arg4 keyFrameInterval:(unsigned long long)arg5 outputType:(long long)arg6 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)width;
-(double)height;
-(long long)outputType;
-(double)videoBitRate;
-(double)audioBitRate;
-(unsigned long long)keyFrameInterval;
@end

