/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:24 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCManagedRecordedVideo.h>
@class NSURL, UIImage;


@protocol SCManagedRecordedVideo <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSURL * videoURL; 
@property (nonatomic,copy,readonly) NSURL * rawVideoDataFileURL; 
@property (nonatomic,copy,readonly) UIImage * placeholderImage; 
@property (nonatomic,readonly) BOOL isFrontFacingCamera; 
@required
-(NSURL *)rawVideoDataFileURL;
-(BOOL)isFrontFacingCamera;
-(UIImage *)placeholderImage;
-(NSURL *)videoURL;

@end


@class NSURL, UIImage, NSString;

@interface SCManagedRecordedVideo : NSObject <SCManagedRecordedVideo> {

	BOOL _isFrontFacingCamera;
	NSURL* _videoURL;
	NSURL* _rawVideoDataFileURL;
	UIImage* _placeholderImage;

}

@property (nonatomic,copy,readonly) NSURL * videoURL;                         //@synthesize videoURL=_videoURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * rawVideoDataFileURL;              //@synthesize rawVideoDataFileURL=_rawVideoDataFileURL - In the implementation block
@property (nonatomic,copy,readonly) UIImage * placeholderImage;               //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (nonatomic,readonly) BOOL isFrontFacingCamera;                      //@synthesize isFrontFacingCamera=_isFrontFacingCamera - In the implementation block
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
-(NSURL *)rawVideoDataFileURL;
-(BOOL)isFrontFacingCamera;
-(id)initWithVideoURL:(id)arg1 rawVideoDataFileURL:(id)arg2 placeholderImage:(id)arg3 isFrontFacingCamera:(BOOL)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIImage *)placeholderImage;
-(NSURL *)videoURL;
@end

