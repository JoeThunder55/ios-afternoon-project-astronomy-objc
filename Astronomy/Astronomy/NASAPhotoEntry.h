//
//  NASAPhotoEntry.h
//  Astronomy
//
//  Created by Joe on 8/9/20.
//  Copyright © 2020 AlphaGradeINC. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NASAPhotoEntry : NSObject

@property (nonatomic, readonly) NSString *photoURL;
@property (nonatomic, readonly) NSDate dateRecorded;
@property (nonatomic, readonly) NSString *cameraRecorded;

-(instancetype) initWithDateRecorded:(nonnull NSDate)dateRecorded
                            photoURL:(nonnull)photoURL;
                            cameraRecorded:(NSString*)cameraRecorded;

-(instancetype) initWithDictionary<NasaPhotoEntry>:(nonnull NSDictionary *)dictionary;

@end

NS_ASSUME_NONNULL_END
